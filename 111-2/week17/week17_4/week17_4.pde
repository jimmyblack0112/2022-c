PImage mario, princess;
void setup(){
  size(600,600);
  mario=loadImage("mario.png");
  princess=loadImage("princess.jpg");
}
void draw(){
  background(255);
  image(mario,0,0,200,300);
  image(princess,x,y);
}
float x=300,y=0;
void mouseDragged(){
   x+=(mouseX-pmouseX);
   y+=(mouseY-pmouseY);
}
