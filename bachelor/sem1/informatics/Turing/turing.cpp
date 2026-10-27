#include <iostream>
#include <cmath>
int tape[50];
int head = 10;
int step = 0;
int condition = -1;
enum Dirrections{
    stop,left,right
};
//этот класс - по сути онда ячейка в таблице состояний
class Cases{
public:
    int nextCondition;
    int letter;
    Dirrections dir;
};
//этот класс - по сути целая строчка в таблице состояний. Состоит из ячеек
class Conditions{
public:
    Cases caseEmpty; // case - Empty cell in tape
    Cases case0; // case - cell '0' in tape
    Cases case1; // case - cell '1' in tape
    Cases caseX; // case - cell 'X' in tape
    Cases caseA; // case - cell 'A' in tape
    Cases caseB; // case - cell 'B' in tape
    int isFinish = 0;
};
void iniciateTape(){
    for(int i = 0; i < 50; i++){        
            tape[i] = -1;
    }
}
void drawHead(){
    for(int i = 0; i < 50; i++)
    {
        if(i == head)
        {
            std::cout << "^";
        }
        else
        {
            std::cout << " ";
        }
    }
            std::cout << "\n";
}
void drawTape(){
    for(int i = 0; i < 50; i++){   
        if(tape[i] >= 0){
            std::cout << tape[i];
        }
        else{
            std::cout << " ";
        }
    }
        std::cout << "\n";
}
void drawLine(){
    for(int i = 0; i < 50; i++){        
            std::cout << "_";
    }
        std::cout << "\n";
}
void drawStep(){
    std::cout << "step: " << step << "\n";
    drawLine();
    drawHead();
    drawTape();
}
void move(int condition_, int letter, Dirrections dir){
    condition = condition_;
    tape[head] = letter;
    if(dir == left){
        head--;
    }
    else if(dir == right){
        head++;
    }
    drawStep();
}
void task2(){
    condition = 0;
    step = 1;
    std::cout << "\n\nTask 2: Binary word inversion\n";
    tape[10] = 1;
    tape[11] = 0;
    tape[12] = 1;
    tape[13] = 1;
    tape[14] = 0;
    drawStep();
    // аполнение таблицы состояний
    Conditions conds[2];
    conds[0].caseEmpty.nextCondition = 1;
    conds[0].caseEmpty.letter = -1;
    conds[0].caseEmpty.dir = stop;
    conds[0].case0.nextCondition = 0;
    conds[0].case0.letter = 1;
    conds[0].case0.dir = right;
    conds[0].case1.nextCondition = 0;
    conds[0].case1.letter = 0;
    conds[0].case1.dir = right;

    conds[1].caseEmpty.nextCondition = 1;
    conds[1].caseEmpty.letter = -1;
    conds[1].caseEmpty.dir = stop;
    conds[1].case0.nextCondition = 0;
    conds[1].case0.letter = 0;
    conds[1].case0.dir = stop;
    conds[1].case1.nextCondition = 0;
    conds[1].case1.letter = 1;
    conds[1].case1.dir = stop;
    conds[1].isFinish = 1;
    int finished = 0;
    while(finished != 1){
        step++;
        finished = conds[condition].isFinish;
        if(tape[head] == 0){
            move(conds[condition].case0.nextCondition, conds[condition].case0.letter, conds[condition].case0.dir);
        }
        else if(tape[head] == 1){    
            move(conds[condition].case1.nextCondition, conds[condition].case1.letter, conds[condition].case1.dir);
        }
        else if(tape[head] == -1){   
         move(conds[condition].caseEmpty.nextCondition, conds[condition].caseEmpty.letter, conds[condition].caseEmpty.dir);
        }
    }
    std::cout << "\nThe end of the task 2";
    return;
}
int main() { 
    iniciateTape();
    drawStep();
    task2();
    return 0;
}