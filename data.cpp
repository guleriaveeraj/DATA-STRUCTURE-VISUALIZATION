using namespace std;
#include<iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//void checkerrors(void);


void click_handler(int x,int y)
{    if(getpixel(x,y)==WHITE)
        {
	//	red_click=true;
	}
}

void box(int size,int a)
{
	setcolor(WHITE);
	            setfillstyle(SOLID_FILL,2);
		        rectangle(76,645+a,161,670+a);
		        bar(76,645+a,161,670+a);
}

void create(char info[],int l)
{   if(l==0)
     { rectangle(31,122,69,140);
	  settextstyle(BOLD_FONT,HORIZ_DIR,1);setcolor(WHITE);
	 outtextxy(72,123,"head");
	 line(47,141,47,157);
	 settextstyle(BOLD_FONT,HORIZ_DIR,3);setcolor(RED);
   rectangle(10+l,159,80+l,200);
   rectangle(80+l,159,110+l,200);setcolor(WHITE);
   outtextxy(29+l,165,info);setcolor(RED);
   //bar(18,159+l,30,180+l);
   }
   
    else
       {  line(-20+l,180,10+l,180);
	    rectangle(10+l,159,80+l,200);
	    rectangle(80+l,159,110+l,200);setcolor(WHITE);
      	outtextxy(29+l,165,info);setcolor(RED);
       //bar(18,159+l,30,180+l);
        //l+=200;
 	  }
	
}


void delete1( int count)
{           setfillstyle(SOLID_FILL,BLACK);
			bar(-120+(count*130),121,111+(130*count),201);

}

void delete2( int count1)
{           setfillstyle(SOLID_FILL,BLACK);
			bar(-120+(count1*130),121,111+(130*count1),201);
             rectangle(31+(count1*130),122,69+(count1*130),140);
	       settextstyle(BOLD_FONT,HORIZ_DIR,1);
		   setcolor(WHITE);
	       outtextxy(85+(count1*130),123,"head");setcolor(RED);
			
}











int main(void)
{
   int gd = DETECT, gm;
   int midx, midy;
  initgraph(&gd, &gm, "C\\TC\\BGI");  
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
  // checkerrors();
  //PAGE 1
 
    

    settextstyle(COMPLEX_FONT,HORIZ_DIR,9);
    outtextxy(280,200,"DATA STRUCTURES");
    outtextxy(500,300,"THROUGH");
    outtextxy(330,400,"VISUALIZATION");
     
	 settextstyle(DEFAULT_FONT,HORIZ_DIR,3);setcolor(RED);
    outtextxy(450,650,"Press any key to start......");
     getch();
   // delay(5000);
   LOOP:  cleardevice();
     //PAGE 2
	 settextstyle(BOLD_FONT,HORIZ_DIR,9);
     outtextxy(midx,20,"TOPIC COVERED");
     line(0,110,getmaxx(),110);
     
     settextstyle(BOLD_FONT,HORIZ_DIR,6);
     setcolor(WHITE);
     circle(200,235,9);
     floodfill(200,235,WHITE);
	 setcolor(2);
	 outtextxy(midx-100,200,"STACK");
	  setcolor(WHITE);
	  setfillstyle(SOLID_FILL,BLUE);
	 circle(200,385,9);
	 floodfill(200,385,WHITE);
	setcolor(2);
	  outtextxy(midx-100,350,"QUEUE");
	  
	  setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	  circle(midx+345,240,9);
	   floodfill(midx+345,240,WHITE);
	   setcolor(2);
	  outtextxy(midx+380,210,"LINKED LIST"); 
	   
	   setcolor(WHITE);
	  setfillstyle(SOLID_FILL,BLUE);
	  circle(midx+315,390,9);
	   floodfill(midx+315,390,WHITE);
	   setcolor(2);
	  outtextxy(midx+335,360,"DOUBLY LINKED LIST");
	  
	  settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	  setcolor(RED);
	  line(0,630,getmaxx(),630);
	  outtextxy(midx+200,640,"Click inside the circle..");
    registermousehandler(WM_LBUTTONDOWN, click_handler);
       int i=1;
	  while (!ismouseclick(WM_LBUTTONDOWN))

    { 
	
	line(0,610,0+i,610);
	line(getmaxx(),610,getmaxx()-i,610);
	line(0,120,0+i,120);
	line(getmaxx(),120,getmaxx()-i,120);
	delay(500);
	i+=100;
   }
 int x,y;


    getmouseclick(WM_LBUTTONDOWN, x, y);

    cout << "The mouse was clicked at: ";

    cout << "x=" << x;

    cout << " y=" << y << endl;
    
 // INSIDE STACK   
    
if((x>=191 && x<=209) && (y>=226 && y<=244))
	 {  LOOP1: cleardevice();
	       settextstyle(BOLD_FONT,HORIZ_DIR,9);
     outtextxy(midx+200,20,"STACK");
     line(0,110,getmaxx(),110);
           
		   
		   
		   
     
     
      settextstyle(BOLD_FONT,HORIZ_DIR,6);
     setcolor(WHITE); setfillstyle(SOLID_FILL,BLUE);
     circle(200,235,9);
     floodfill(200,235,WHITE);
	 setcolor(2);
	 outtextxy(midx-100,200,"STACK AS AN ARRAY");
	  setcolor(WHITE);
	  setfillstyle(SOLID_FILL,BLUE);
	 circle(200,385,9);
	 floodfill(200,385,WHITE);
	setcolor(2);     
	  outtextxy(midx-100,350,"STACK AS LINKED LIST");
	  settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	  setcolor(RED);
	 line(0,630,getmaxx(),630);
	  outtextxy(midx+200,640,"Click inside the circle..");
	   
	   //back button
	   setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	  circle(980,560,9);
	   floodfill(980,560,WHITE);
	   
	  outtextxy(1000,550,"BACK");
	  setcolor(RED);
		    
       
	    int x1,y1;


    int j=1;
             while (!ismouseclick(WM_LBUTTONDOWN))

           {  
	
	        line(0,610,0+j,610);
	        line(getmaxx(),610,getmaxx()-j,610);
	          line(0,120,0+j,120);
	         line(getmaxx(),120,getmaxx()-j,120);
	         delay(500);
	        j+=100;
           }
	   getmouseclick(WM_LBUTTONDOWN, x1, y1);
         cout <<"The mouse was clicked at: ";
         cout <<"x="<<x1;
         cout <<" y="<<y1<<endl; 
         
         
        
	    // INSIDE STACK AS AN ARRAY
        if((x1>=191 && x1<=209) && (y1>=226 && y1<=244))
	       {   cleardevice();
		        settextstyle(BOLD_FONT,HORIZ_DIR,9);
                outtextxy(midx-80,20,"STACK AS AN ARRAY");
                line(0,110,getmaxx(),110);
		   
		    //back button
	             setcolor(WHITE);
	            setfillstyle(SOLID_FILL,RED);
	            circle(1180,680,9);
	            floodfill(1180,680,WHITE);
	             settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	            setcolor(WHITE);
	            outtextxy(1200,670,"BACK");
	            setcolor(RED);
	            
	            
	            
	            
	            
	            int size;
	            cout<<"enter the size of the array"<<endl;
	            cin>>size;
	            int a=0;
	            for(i=0;i<size;i++)
	            {  
				  box(size,a);
				  a-=25; 
				} delay(500);
	           outtextxy(1200,200,"PUSH");
	           delay(500);
	           outtextxy(1200,300,"POP");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1169,212,9);
	           floodfill(1169,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1173,315,9);
	           floodfill(1173,315,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           
	           
	           outtextxy(200,150,"void push (int stack[], int item)");
               outtextxy(200,180," {  if (top == (MAX-1))");
	           outtextxy(340,210,"printf(overflow);");
                  outtextxy(300,240," else");
                outtextxy(350,270,"{ ++top;");
	              outtextxy(200,300,"stack[top]=item;}}");
	              
	              
	               outtextxy(200,500,"int pop (int stack[])");
                      outtextxy(200,530,"{  int ret;");
                       outtextxy(200,560,"if (top == -1)");
                            outtextxy(200,590,"{ printf(\"underflow\");}");
	                    outtextxy(200,620,"else");
                       outtextxy(200,645,"{ret = stack[top];");
	                     outtextxy(200,680,"   --top;}");
                      outtextxy(200,710,"  return ret;}");
                  
	           
	           
	           
	           
	           
	           
		     // floodfill(76,645,161,670,WHITE);
               
	           int x8,y8;int c=0;int top=-1; char star[15];
		     	   sprintf(star,"%d",top);
		     	    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
				     outtextxy(3,652,"top=");
				 outtextxy(40,652,star);settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		     	  // outtextxy(180,600,star);

            loop9: 
			settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
                 int m=1; //outtextxy(3,652,"top=");
				 //outtextxy(40,652,star);
				  settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
             while (!ismouseclick(WM_LBUTTONDOWN))

            {  
	
	        //line(0,650,0+h,650);
	        //line(getmaxx(),640,getmaxx()-h,640);
	          //line(0,90,0+m,90);
	        // line(getmaxx(),90,getmaxx()-m,90);
	         delay(500);
	         m+=100;
            } 
	         getmouseclick(WM_LBUTTONDOWN, x8, y8);
             cout <<"The mouse was clicked at: ";
             cout <<"x="<<x8;
               cout <<" y="<<y8<<endl; 
         
	          if((x8>=1171 && x8<=1189) && (y8>=671 && y8<=689))
	          {
	      	     setcolor(RED);
	         	goto LOOP1;
	      	
		     }
		     else if((x8>=1160 && x8<=1178) && (y8>=203 && y8<=221))
		     {
		     	   //cleardevice();
		     	   if(c<=size-1)
				{  top=top+1;  
                    sprintf(star,"%d",top);				
				    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
				     outtextxy(3,652,"top=");
				 outtextxy(40,652,star);settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
			    	int value;
		     	   cout<<"enter the value you want to insert: "<<endl;
		     	   cin>>value;
		     	   char srt[15];
		     	   sprintf(srt,"%d",value);settextstyle(BOLD_FONT,HORIZ_DIR,2);
		     	   outtextxy(100,646-(c*25),srt);
					c++; 
					goto loop9;
			   }
			   else {   outtextxy(504,670,"STACK OVERFLOW!!");
			             delay(500);setfillstyle(SOLID_FILL,BLACK);
			             bar(495,670,918,692);
			             goto loop9;
			   } 
		    } 
		       
		      else if((x8>=1164 && x8<=1182) && (y8>=306 && y8<=324))
		     { // pop 
		     	  // cleardevice();
		     	  if(c==0)
		     	  {outtextxy(504,670,"STACK UNDERFLOW!!");
			             delay(500);setfillstyle(SOLID_FILL,BLACK);
			             bar(495,668,918,692);
			             goto loop9;
				   }
		     	         c--; top=top-1;
						  sprintf(star,"%d",top);
						  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		     	           outtextxy(3,652,"top=");
				            outtextxy(40,652,star);
							settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		     	         //setfillstyle(SOLID_FILL,BLACK);
			            	setcolor(WHITE);
	                       setfillstyle(SOLID_FILL,2);
		                     rectangle(76,646-(c*25),161,671-(c*25));
		                      bar(76,644-(c*25),161,669-(c*25));
		                      line(76,644-(c*25),161,644-(c*25));
			                  goto loop9;
		     	  
		     	   
		    } 
		    else
		    {goto loop9;
			}
		    
		      
		   
		        
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   }
	    
	    
	    //stack as linked list
	     else if((x1>=191 && x1<=209) && (y1>=376 && y1<=394))
	     {  
	          cleardevice();
		        settextstyle(BOLD_FONT,HORIZ_DIR,9);
                outtextxy(midx-150,20,"STACK AS LINKED LIST");
                line(0,110,getmaxx(),110);
		    
		               //back button
	         setcolor(WHITE);
	       setfillstyle(SOLID_FILL,RED);
	          circle(1180,680,9);
	         floodfill(1180,680,WHITE);
	              settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	         setcolor(WHITE);
	           outtextxy(1200,670,"BACK");
	             setcolor(RED);
		    
		             outtextxy(1200,200,"PUSH");
	           delay(500);
	           outtextxy(1200,300,"POP");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1169,212,9);
	           floodfill(1169,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1173,315,9);
	           floodfill(1173,315,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           
	           
	           settextstyle(BOLD_FONT,HORIZ_DIR,3);
	           outtextxy(13,224,"void push(int data){");
                      outtextxy(13,254,"if(top == NULL)");
                        outtextxy(13,284,"{top=create();");
                   outtextxy(13,314,"top->ptr = NULL;");
                   outtextxy(13,344,"top->info = data;}");
                 outtextxy(13,374,"else{");
	              outtextxy(13,404,"temp=create();");
                    outtextxy(13,434,"temp->ptr=top;");
                   outtextxy(13,464,"temp->info=data;");
                      outtextxy(13,494,"top=temp;}}");
 
		    
		                       outtextxy(552,224,"void pop()");
                              outtextxy(552,254,"{top1=top;");
                                outtextxy(552,284,"if(top1==NULL)");
                               outtextxy(552,314,"{printf(\"\nTrying to pop from empty stack\");");
                                 outtextxy(552,344,"return;}");
                                      outtextxy(13,374,"else");
                              outtextxy(552,404,"top1=top1->ptr;");
                               outtextxy(552,434,"printf(\"\n Popped value : %d\", top->info);");
                                 outtextxy(552,464,"free(top);");
                                     outtextxy(552,494,"top=top1;}");
		      
		    
		    
		    
		    
       
	           int x9,y9;static int l;int static count;
           loop11: 

            int p=1;
             while (!ismouseclick(WM_LBUTTONDOWN))

           {  
	
	        //line(0,650,0+h,650);
	        //line(getmaxx(),640,getmaxx()-h,640);
	          //line(0,90,0+p,90);
	         //line(getmaxx(),90,getmaxx()-p,90);
	         delay(500);
	        p+=100;
           }
	        getmouseclick(WM_LBUTTONDOWN, x9, y9);
           cout <<"The mouse was clicked at: ";
           cout <<"x="<<x9;
          cout <<" y="<<y9<<endl; 
         
	       if((x9>=1171 && x9<=1189) && (y9>=671 && y9<=689))
	        {
	      	
	      	  goto LOOP1;
	      	
		    }
		    
		    else if((x9>=1160 && x9<=1178) && (y9>=203 && y9<=221)) 
		    {    int info; 
		    	setcolor(RED);
		    	cout<<"enter the info u want to insert"<<endl;
		    	cin>>info; char srt3[15];
		     	   sprintf(srt3,"%d",info);count++;
		     	   create(srt3,l);l+=130;
		    	goto loop11;
		    	
			}
              
			  else if((x9>=1164 && x9<=1182) && (y9>=306 && y9<=324))		    
		     {
		     	delete1(count); count--;
		     	//outtext("am working dude ");
				 setcolor(RED);
		     	goto loop11;
			 }
		    
	        else{
		       	goto loop11;
			   }
	     
	     
	     
	     
	     
		 }
	     // {
		 //// }
	    else if((x1>=971 && x1<=990) && (y1>=550 && y1<=570))
	      {
	      	
	      	goto LOOP;
	      	
		  }
	    
	    
	    
	    
	       else
	       {  goto LOOP1;
		   } 
	        
	 
	 
	 
	 
	 
	   
	 }   
	 
	 // inside queue
	 else if((x>=191 && x<=209) && (y>=376 && y<=394))
	 {
	
	    LOOP2:   cleardevice();
	       settextstyle(BOLD_FONT,HORIZ_DIR,9);
     outtextxy(midx+200,10,"QUEUE");
     line(0,110,getmaxx(),110);
     
     
      settextstyle(BOLD_FONT,HORIZ_DIR,6);
     setcolor(WHITE);
     setfillstyle(SOLID_FILL,RED);
     circle(200,235,9);
     floodfill(200,235,WHITE);
	 setcolor(2);
	 outtextxy(midx-100,200,"QUEUE AS AN ARRAY");
	  setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	 circle(200,385,9);
	 floodfill(200,385,WHITE);
	setcolor(2);     
	  outtextxy(midx-100,350,"QUEUE AS LINKED LIST");
	  settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	  setcolor(RED);
	 line(0,630,getmaxx(),630);
	  outtextxy(midx+200,640,"Click inside the circle..");
	  
	  //back button
	   setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	  circle(980,560,9);
	   floodfill(980,560,WHITE);
	   
	  outtextxy(1000,550,"BACK");
	  setcolor(RED);
	  
	   int x2,y2;


          int K=1;
             while (!ismouseclick(WM_LBUTTONDOWN))

           {  
	
	        line(0,610,0+K,610);
	        line(getmaxx(),610,getmaxx()-K,610);
	          line(0,120,0+K,120);
	         line(getmaxx(),120,getmaxx()-K,120);
	         delay(500);
	        K+=100;
           }
	   getmouseclick(WM_LBUTTONDOWN, x2, y2);
         cout <<"The mouse was clicked at: ";
         cout <<"x="<<x2;
         cout <<" y="<<y2<<endl; 	
	       
	       
	       
	        // INSIDE QUEUE AS AN ARRAY
        if((x2>=191 && x2<=209) && (y2>=226 && y2<=244))
	       {   cleardevice();
		        settextstyle(BOLD_FONT,HORIZ_DIR,9);
                outtextxy(midx-80,10,"QUEUE AS AN ARRAY");
                line(0,110,getmaxx(),110);
		        int size1;
	            cout<<"enter the size of the array"<<endl;
	            cin>>size1;
	            int b=0;
	            for(i=0;i<size1;i++)
	            {  
				  box(size1,b);
				  b-=25; 
				} delay(500);settextstyle(BOLD_FONT,HORIZ_DIR,3);
	           outtextxy(1200,200,"ENQUEUE");
	           delay(500);
	           outtextxy(1200,300,"DEQUEUE");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1169,212,9);
	           floodfill(1169,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1173,315,9);
	           floodfill(1173,315,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           
	           
	                             settextstyle(BOLD_FONT,HORIZ_DIR,3);setcolor(WHITE);
	                            outtextxy(200,120,"insert()");
                                outtextxy(200,150,"{ int add_item;");
                           outtextxy(200,180,"if(rear==MAX-1)");
                       outtextxy(200,210,"printf(\"Queue Overflow \n\");");
                         outtextxy(200,240,"else");
                        outtextxy(200,270,"{ if(front==-1)");
                        outtextxy(200,300,"front = 0;");
                      outtextxy(200,330,"printf(\"Inset the element in queue : \");");
                         outtextxy(200,360,"scanf(\"%d\", &add_item);");
                       outtextxy(200,390,"rear = rear + 1;");
                      outtextxy(200,420,"queue_array[rear] = add_item; }}");
 
	                          outtextxy(200,480,"delete()");
                         outtextxy(200,510,"{if(front==-1 || front>rear)");
                        outtextxy(200,540,"{printf(\"Queue Underflow \n\");");
                          outtextxy(200,570,"return;}");
                          outtextxy(200,600,"else");
                       outtextxy(200,630,"{printf(\"Element deleted: %d\n\",array[front]);");
                        outtextxy(200,660,"front=front+1;}}");
	           
	           
	           
	                            
	           
	           
	           
	           
	           
	           
	           
	           
	           
	           
		             int d=0;
		             int e=0;
		             int f;
		          loop10:   
		             
		             
		             
		   
		                                //back button
	                 setcolor(WHITE);
	               setfillstyle(SOLID_FILL,RED);
	                 circle(1180,680,9);
	              floodfill(1180,680,WHITE);
	              settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	                 setcolor(WHITE);
	                outtextxy(1200,670,"BACK");
	               setcolor(RED);
		    
       
	            int x10,y10; int top1=-1;
	            int rear1=-1; char str1[25];


                   int q=1;
                 while (!ismouseclick(WM_LBUTTONDOWN))

                  {    
	
	              //line(0,650,0+h,650);
	             //line(getmaxx(),640,getmaxx()-h,640);
	                //line(0,90,0+q,90);
	               // line(getmaxx(),90,getmaxx()-q,90);
	               delay(500);
	                q+=100;
                  }
	              getmouseclick(WM_LBUTTONDOWN, x10, y10);
                   cout <<"The mouse was clicked at: ";
                   cout <<"x="<<x10;
                    cout <<" y="<<y10<<endl; 
         
	         if((x10>=1171 && x10<=1189) && (y10>=671 && y10<=689))
	           {  
	      	
	             	goto LOOP2;
	      	
		        }
		   
		      else if((x10>=1160 && x10<=1178) && (y10>=203 && y10<=221))                                                                                  
		      {
		      	
		      	
		      	  if(d<=size1-1)
				{  rear1=e;  
                    sprintf(str1,"%d",rear1);				
				    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
				     outtextxy(3,642,"raer");
				 outtextxy(40,652,str1);settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
			    	int value1;
		     	   cout<<"enter the value you want to insert: "<<endl;
		     	   cin>>value1;
		     	   char srt2[15];
		     	   sprintf(srt2,"%d",value1);settextstyle(BOLD_FONT,HORIZ_DIR,2);
		     	   outtextxy(100,646-(d*25),srt2);
				      d++; f++;
					goto loop10;
			   }
			   else {   outtextxy(504,670,"QUEUE OVERFLOW!!");
			             delay(500);setfillstyle(SOLID_FILL,BLACK);
			             bar(495,670,918,692);
			             goto loop10;
			   }
		    
			  }
		      
		        else if((x10>=1164 && x10<=1182) && (y10>=306 && y10<=324))
		        {
		        	
		           // pop 
		     	  // cleardevice();
		     	  if(f==0)
		     	  {outtextxy(504,670,"QUEUE UNDERFLOW!!");
			             delay(500);setfillstyle(SOLID_FILL,BLACK);
			             bar(495,668,918,692);
			             goto loop10;
				   }
		     	          top1=d;
						  sprintf(str1,"%d",top1);
						  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		     	           outtextxy(3,652,"top=");
				            outtextxy(40,652,str1);
							settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
		     	         //setfillstyle(SOLID_FILL,BLACK);
			            	setcolor(WHITE);
	                       setfillstyle(SOLID_FILL,2);
		                     rectangle(76,646-(e*25),161,671-(e*25));
		                      bar(76,644-(e*25),161,669-(e*25));
		                      line(76,644-(e*25),161,644-(e*25)); 
							  e++;
							  f--;
			                  goto loop10;
		        
		        
		        
		        
				}
		     
		       else{
		       	goto loop10;
			   }
		   
		   
		   
		   
		   
		   
		   
		   }
	       
	        //INSIDE QUEUE  as linked list
	     else if((x2>=191 && x2<=209) && (y2>=376 && y2<=394))
	     {  
	          cleardevice();
		        settextstyle(BOLD_FONT,HORIZ_DIR,9);
                outtextxy(midx-150,10,"QUEUE AS LINKED LIST");
                line(0,110,getmaxx(),110);
		   
	                                        
	                                         //back button
	             setcolor(WHITE);
	            setfillstyle(SOLID_FILL,RED);
	             circle(1180,680,9);
	             floodfill(1180,680,WHITE);
	            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	             setcolor(WHITE);
	              outtextxy(1200,670,"BACK");
	                setcolor(RED);
	                
		             outtextxy(1200,200,"ENQUEUE");
	           delay(500);
	           outtextxy(1200,300,"DEQUEUE");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1169,212,9);
	           floodfill(1169,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(1173,315,9);
	           floodfill(1173,315,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           
	           
	           
	           settextstyle(BOLD_FONT,HORIZ_DIR,3);
	           outtextxy(13,224,"void enq(int data){");
                outtextxy(13,254,"if(rear==NULL){");
                   outtextxy(13,284,"rear=create();");
                  outtextxy(13,314,"rear->ptr=NULL;");
                 outtextxy(13,344,"rear->info=data;");
               outtextxy(13,374,"front=rear; }");
             outtextxy(13,404," else{");
              outtextxy(13,434,"temp=create();");
              outtextxy(13,464,"rear->ptr = temp;");
              outtextxy(13,494,"temp->info = data;");
               outtextxy(13,524,"temp->ptr = NULL;");
               outtextxy(13,554,"rear=temp;}}");
               
               
               
               
               outtextxy(441,224,"void deq(){");
                outtextxy(441,254,"front1=front;");
               outtextxy(441,284,"if(front1==NULL) {");
               outtextxy(441,314,"printf(\"ERROR\");");
                   outtextxy(441,344," return;}");
                     outtextxy(441,374,"else");
                   outtextxy(441,404,"if(front1->ptr!=NULL){");
                    outtextxy(441,434,"front1=front1->ptr;");
                    outtextxy(441,464,"printf(\"\n Dequed value : %d\", front->info);");
                    outtextxy(441,494,"free(front);");
                       outtextxy(441,524,"front=front1;}");
                       outtextxy(441,554,"else{");
                     outtextxy(441,584,"printf(\"\n Dequed value : %d\", front->info);");
                      outtextxy(441,614,"free(front);");
                         outtextxy(441,644,"front = NULL;");
                            outtextxy(441,674,"rear=NULL;}}");
                  
		    
		    
	                
	                
	                
		     
            
	               int x11,y11;
                 

                 int s=1;int static l1=0;int static count1=0;
                 loop18:
               while (!ismouseclick(WM_LBUTTONDOWN))

              {  // outtext("h");  
	
	          //line(0,650,0+h,650);
	          //line(getmaxx(),640,getmaxx()-h,640);
	            //line(0,90,0+s,90);
	           //line(getmaxx(),90,getmaxx()-s,90);
	           delay(500);
	           s+=100;
             }
	          getmouseclick(WM_LBUTTONDOWN, x11, y11);
              cout <<"The mouse was clicked at: ";
                cout <<"x="<<x11;
                   cout <<" y="<<y11<<endl; 
         
	            if((x11>=1171 && x11<=1189) && (y11>=671 && y11<=689))
	                {
	      	
	              	goto LOOP2;
	      	
		           }
	                                        
	            else if((x11>=1160 && x11<=1178) && (y11>=203 && y11<=221))                             
	                {
	                	
	                	
	                 // outtextxy(100,200,"am working");	
	                       int info1; 
		    	setcolor(RED);
		    	cout<<"enter the info u want to insert"<<endl;
		    	cin>>info1; char srt4[15];
		     	   sprintf(srt4,"%d",info1);
		     	   create(srt4,l1);l1+=130;setcolor(RED);
						   goto loop18;      	
	                	
					}                        
	                                        
	              else if((x11>=1164 && x11<=1182) && (y11>=306 && y11<=324))
				  {    
				      delete2(count1);count1++;
				     	goto loop18;
				   	
				  }                          
	             else
				 {
				 	goto loop18;
		          }                           
	                                        
	                                        
	                                        
	     
	     
	     
	     
	     
		 }
	     // {
		 //// }
	    else if((x2>=971 && x2<=990) && (y2>=550 && y2<=570))
	      {
	      	
	      	goto LOOP;
	      	
		  }
	       
	       
	 
	 	
	 	
	 	
	 	
	 }
  else if((x>=(midx+336) && x<=(midx+354)) && (y>=230 && y<=249))
  {
       	
       	cleardevice();setcolor(RED);
	       settextstyle(BOLD_FONT,HORIZ_DIR,9);
     outtextxy(midx,-10,"lINKED LIST");
     //line(0,110,getmaxx(),110);
      
	   
	   //back button
	   setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	  circle(1180,680,9);
	   floodfill(1180,680,WHITE);
	   settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	   setcolor(WHITE);
	  outtextxy(1200,670,"BACK");
	  setcolor(RED);
		    
           outtextxy(900,200,"INSERTION AT BEG.");
	           delay(500);
	           outtextxy(900,250,"INSERTION AT END");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(869,212,9);
	           floodfill(869,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(873,265,9);
	           floodfill(873,265,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
		    
		    
		    
		    
		      setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(869,312,9);
	           floodfill(869,312,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(873,365,9);
	           floodfill(873,365,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
               setcolor(RED);
                outtextxy(900,300,"DELETION FROM BEG.");
	           delay(500);
	           outtextxy(900,350,"DELETION FROM END");
	           delay(500);
       
       
          settextstyle(BOLD_FONT,HORIZ_DIR,2);
          setcolor(WHITE);
              outtextxy(10,234,"void  insert(){");
                 outtextxy(10,264,"struct node *temp;");    
            outtextxy(10,294,"struct node *nn=create();");
             outtextxy(10,324,"printf(\"enter  the data\n\");");
            outtextxy(10,354,"scanf(\"%d\",&nn->data);");
           outtextxy(10,384," temp=first;");
           outtextxy(10,414," while(temp->next!=first)");
             outtextxy(10,434,"temp=temp->next;");
             outtextxy(10,464,"temp->next=nn;");
           outtextxy(10,494,"nn->next=NULL;}");
           
           
           
           
                     outtextxy(441,234,"void del(node **head, int *num){");
                            outtextxy(441,264,"node *deleteNode, *loc;");
                         outtextxy(441,294,"if(*head==NULL)");
                         outtextxy(441,324,"return;");
                         outtextxy(441,354,"else if((*head)->next==NULL) {");
                          outtextxy(441,384,"*head=NULL;");
                           outtextxy(441,414,"return done;}");
                             outtextxy(441,444,"else {");
                             outtextxy(441,474,"loc=*head;");
                              outtextxy(441,504," while(loc->next->next!=NULL)");
                              outtextxy(441,534,"loc=loc->next;");
                             outtextxy(441,564,"deleteNode=loc->next;");
                              outtextxy(441,594,"*num=deleteNode->info;");
                               outtextxy(441,624,"loc->next=NULL;");
                                 outtextxy(441,654,"free(deleteNode);");
                               

           
           setcolor(RED);
       
       
       
       
       
       
       int static l2;int static count3;int static count4;
       loop20:
	    int x6,y6;


    int h=1;
             while (!ismouseclick(WM_LBUTTONDOWN))

           {  
	
	        //line(0,650,0+h,650);
	        //line(getmaxx(),640,getmaxx()-h,640);
	          line(0,90,0+h,90);
	         line(getmaxx(),90,getmaxx()-h,90);
	         delay(500);
	        h+=100;
           }
	   getmouseclick(WM_LBUTTONDOWN, x6, y6);
         cout <<"The mouse was clicked at: ";
         cout <<"x="<<x6;
         cout <<" y="<<y6<<endl; 
         
	    if((x6>=1171 && x6<=1189) && (y6>=671 && y6<=689))
	      {
	      	
	      	goto LOOP;
	      	
		  }
	  
	 else if((x6>=858 && x6<=876) && (y6>=204 && y6<=222))
	 {//inserttion at beg.
	 	   outtext("");
	 	   goto loop20;
	 	
	 	
	 	
	  } 
	   	
	   	else if((x6>=864 && x6<=886) && (y6>=254 && y6<=272))
	 {//insertion at end;
	 	      int info2; 
		    	setcolor(RED);
		    	cout<<"enter the info u want to insert"<<endl;
		    	cin>>info2; char srt5[15];
		     	   sprintf(srt5,"%d",info2);count4++;
		     	   create(srt5,l2);l2+=130;setcolor(RED);
	 	   goto loop20;
	 	
	 	
	 	
	  }
	  
	    	else if((x6>=860 && x6<=878) && (y6>=302 && y6<=320))
	 {
	 	   //deletion from the begining:
	 	     delete2(count3);count3++;
	 	   goto loop20;
	 	
	 	
	 	
	  }
	    	else if((x6>=864 && x6<=882) && (y6>=355 && y6<=373))
	 {   //deletion from the end;
	 	     delete1(count4); count4--;
		     	//outtext("am working dude ");
				 setcolor(RED);
	 	  
	 	   goto loop20;
	 	
	 	
	 	
	  }
	  
	  else
	  {
	  	goto loop20;
	  }
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
       	
       	
       	
       	
  	
  	
  	
  	
   	
  	
  }	 
  
  //indide doubly linked list
   else if((x>=(midx+305) && x<=(midx+324)) && (y>=381 && y<=399))
  {
       	
       	cleardevice();setcolor(RED);
	       settextstyle(BOLD_FONT,HORIZ_DIR,9);
     outtextxy(midx-200,20,"  DOUBLY lINKED LIST");
     line(0,110,getmaxx(),110);
       	
       
	   //back button
	   setcolor(WHITE);
	  setfillstyle(SOLID_FILL,RED);
	  circle(1180,680,9);
	   floodfill(1180,680,WHITE);
	   settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	   setcolor(WHITE);
	  outtextxy(1200,670,"BACK");
	  setcolor(RED);
		    
		    
		    
		    
		    setcolor(RED);
		    
           outtextxy(900,200,"INSERTION AT BEG.");
	           delay(500);
	           outtextxy(900,250,"INSERTION AT END");
	           delay(500);
	           
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(869,212,9);
	           floodfill(869,212,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(873,265,9);
	           floodfill(873,265,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
		    
		    
		    
		    
		      setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(869,312,9);
	           floodfill(869,312,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
	           circle(873,365,9);
	           floodfill(873,365,WHITE);
	            setcolor(WHITE);
	           setfillstyle(SOLID_FILL,RED);
               setcolor(RED);
                outtextxy(900,300,"DELETION FROM BEG.");
	           delay(500);
	           outtextxy(900,350,"DELETION FROM END");
	           delay(500);
       
       
       /*  TO insert at beginning */
       setcolor(WHITE);
       settextstyle(BOLD_FONT,HORIZ_DIR,3);
                    outtextxy(10,132," void at_beg(){");
            
                      outtextxy(10,162,"if(h==NULL){");
                       outtextxy(10,192,"create();");
                         outtextxy(10,222,"h=temp;");
                       outtextxy(10,252,"temp1=h;}");
                          
                        outtextxy(10,282,"else{");
                          outtextxy(10,312,"create();");
                       outtextxy(10,342,"temp->next=h;");
                        outtextxy(10,372,"h->prev=temp;");
                        outtextxy(10,402,"h=temp;}}");
                        
                        
                        
                        /* To insert at end */
              outtextxy(400,132,"void at_end(){");
                outtextxy(400,162,"if(h==NULL){");
                     	outtextxy(400,192,"create();");
                       outtextxy(400,222,"h=temp;");
                     outtextxy(400,252,"temp1=h;}");
                         outtextxy(400,282,"else{");
    	                   outtextxy(400,312,"create();");
                   outtextxy(400,342,"temp1->next=temp;");
                       outtextxy(400,372,"temp->prev=temp1;");
                       outtextxy(400,402,"temp1=temp;}}");
            setcolor(RED);
 
       
		    
		    
		    loop21:
       
	    int x7,y7;


    int l=1;
             while (!ismouseclick(WM_LBUTTONDOWN))

           {  
	
	        //line(0,650,0+h,650);
	        //line(getmaxx(),640,getmaxx()-h,640);
	          //line(0,90,0+l,90);
	         //line(getmaxx(),90,getmaxx()-l,90);
	         delay(500);
	        l+=100;
           }
	   getmouseclick(WM_LBUTTONDOWN, x7, y7);
         cout <<"The mouse was clicked at: ";
         cout <<"x="<<x7;
         cout <<" y="<<y7<<endl; 
         
	    if((x7>=1171 && x7<=1189) && (y7>=671 && y7<=689))
	      {
	      	
	      	goto LOOP;
	      	
		  }
	  
	  
	  else if((x7>=858 && x7<=876) && (y7>=204 && y7<=222))
	 {//inserttion at beg.
	 	   outtext("hi");
	 	   goto loop20;
	 	
	 	
	 	
	  } 
	   	
	   	else if((x7>=864 && x7<=886) && (y7>=254 && y7<=272))
	 {//insertion at end;
	 	     
	 	   goto loop21;
	 	
	 	
	 	
	  }
	  
	    	else if((x7>=860 && x7<=878) && (y7>=302 && y7<=320))
	 {
	 	   //deletion from the begining:
	 	    
	 	   goto loop21;
	 	
	 	
	 	
	  }
	    	else if((x7>=864 && x7<=882) && (y7>=355 && y7<=373))
	 {   //deletion from the end;
	 	  
	 	   goto loop21;
	 	
	 	
	 	
	  }
	  
	  else
	  {
	  	goto loop21;
	  }
	  
	  
	  
	  
	   	
       	
       	
       	
  	
  	
  	
  	
   	
  	
  }	 
  else
    {    outtextxy(200,600,"CLICK INSIDE THE CIRCLE");
        goto LOOP;
	  }	
	 
	 
	 
	 
	 
	 
	   
	   
	  
      getch();
   closegraph();

   
   
 return 0;
}
   
   

