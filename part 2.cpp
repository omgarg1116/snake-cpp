#include <conio.h>//add this at the top of the code



void Setup()                                              
{
    gameOver = false;
    dir = STOP;
    X = width/2;                                
    Y = height/2;                                  
    fruitX = 1+rand()%width;
    fruitY = 1+rand()%height;
    score = 0;
}

void Draw()                                                              
{
    system("cls");                
    for(int i=0; i<height+2; i++)                                   
    {
        for(int j=0; j<width+2; j++)                               
        {
            if(i==0 || i==height+1 || j==0 || j==width+1)      
                std::cout<<'#';
            else if(j==X && i==Y)                                
                std::cout<<'O';
            else if(j==fruitX && i==fruitY)                              
                std::cout<<'F';
            else
                std::cout << "";
            if (j==width-1)
                std::cout<<"#";
            }
            std::cout<<std::endl;
        }

        for (int i=0; i< width+2; i++)
            std::cout<<"#"<<std::endl;
            std::cout<<"Score: "<<score<<std::endl;
}

void Input()
{
    if(_kbhit())                   
    {
        switch(_getch())          
        {
        case 'a':
            direction = LEFT;
            break;
        case 's':
            direction = DOWN;
            break;
        case 'w':
            direction = UP;
            break;
        case 'd':
            direction = RIGHT;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
void Logic(){
    switch(dir)                 
        {
        case LEFT:
            X--;
            break;
        case RIGHT:
            X++;
            break;
        case UP:
            Y--;
            break;
        case DOWN:
            Y++;
            break;
        default:
            break;
    }
    if (x > width || x < 0 || y > height || y < 0)
        gameover = true;
    if(X==fruitX && Y==fruitY)
    {
        score += 10
        fruitX = rand()%width;
        fruitY = rand()%height;
    }
}
