//строчный комментарий, можно выделить мышкой и нажать "Ctrl" + /-несколько строчек  
/*блочный комментарий*/
#include <stdio.h> //подключить библиотеку <stdio.h> (<stdin>, <stdout>, <stderror>)
#define SIZE 10 //создать глобальную константу SIZE со значением 10
void sum(int a, int b); //объявляем функцию, которая не возвращает ничего(void) с двумя аргументами(a и b)
int sum_one(char a, int c); //объявляем функцию, которая возвращает значение типом int, с двумя аргументами(a и c)
//main с двумя аргументами(из командной строки);
//int main (int argc, char*argv[.]){
//argc - кол-во argv (./a.out Hello World)
//argc==3 argv ("a.out", "Hello", "World")
//gcc main.c - компиляция, исполняемый файл a.out
//gcc main.c -o proga-компиляция, исполняемый файл proga
//./a.out ||./proga-запуск программы
//программа выполняется сверху вниз
//строка массив символов, заканчивающая '\0'-%s
//вещественные числа float спец.-%f, double спец.-%lf
//спецификатор адреса %p(&a)
//беззнаковый тип-unsigned/(unsigned char 0...255)
int main(void){
int a; //объявление целой переменной
a = 5; //присвоить значение
int b=3, c =6;//объявили и присвоили имена
//int = 1_d, Deb; нельзя такие имена
int sum_1, sum_o, sumOne; //правильные имена переменных
printf("text:a=%d, b=%d\n",a,c); //вызов функции printf(аргументы), функция вывода в терминал(stdout)
//в "." задаётся текст вывода
//если переменной не присвоить значение, то в ней хранится мусор.
scanf("%d",&sum_1); //вызов функции scanf
//scanf - функция ввода с клавиатуры, в ".", указывается какой тип,
//после '.' адрес переменной куда присвоить значение
//перемещения внутри блока {}-локальные
//перемещения вне функции - глобальные
printf("адрес sum_1=%p\n",&sum_1);
//\n-отступ на новую строку (enter)
//операторы сравнения:>,<,>=,<=,!=,==;
//a>b, если a меньше b значение=0, если a больше b, значение=1
//0-это ложь, !0(не 0)-истина
//5>4==1, 3<0==0
printf("res=%d res=%d\n", 5>4, 3<0);
//Условные операторы
if(5>3){ //если 5 больше 3
//что выполнится, если условие в квадратных скобках в (.)-истина (!0)
}else{ //иначе, если условие в if (ложь)==0
//выполнится этот блок
}
if(3<0){ //если
    //этот блок{} выполнится, если в if (истина)==!0
}else if (5>3){ //иначе если
    //этот блок выполнится, если в if (ложь) и в else if (истина)
}else{ //иначе
//этот блок выполняется, если в if (ложь) и в else (ложь)
}
//в скобках if  можно писать сложные конструкции
//&&-и, ||-или
if((1>0 && 3>2)|| 6!=8){
    //при && истина будет, если оба условия истина
    //при || истина будет, если хоть одно условие истина
    //приоритет:сначала выполняется то, что в скобках, потом && (и);
    //потом || (или);
    //тернарная операция (if в одну строку)
    //условие?, если истина:если ложь (условие)
}
printf("res=%s\n", 2>0?"2>0\n":"2<0\n");
sum(5,6); //вызов функции sum с аргументами 5 и 6
int resoult = sum_one(16,5); //объявляем переменную и присваиваем значение результата(return) выполнения функции sum_one(аргументы);
int prost=300; //объявляем и присваиваем значение 300
int *p=&prost; //объявляем переменную типом int*(указатель) с именем p и присваиваем ей значение адрес переменной prost
*p=10; //разыменовываем указатель и присваиваем значение адреса p значение 10
//теперь значение prost=10
printf("&prost=%p &p=%p\n prost=%d *p=%d\n p=%p\n",&prost,&p,prost,*p,p);
//массивы
int array[SIZE]; //объявление целочиленного (int) массива статического массива размером [SIZE]
int array_two[SIZE]={0}; //оьъявляем и присваиваем всем элементам массива значение 0
int array_three[SIZE]={3}={1,2,3}; //объявляем и присваиваем значение элементам
//array_three[0]==1
//array_three[2]==3
//индексы элементов начинаются с 0 и заканчиваются SIZE -1
int res_a=array_three[1]; //объявляем и присваиваем значению res_a значение array_three[1], res_a==2
printf("a[1]=%d res_a=%d\n",array_three[1], res_a); 
int domoy=3;
} //конец тела функции main (конец программы)
void sum (int a, int b){ //определяем функцию(начало)
//тело функции
printf("a+b=%d\n", a+b);
} //конец функции
int sum_one(char a,int c){ //определяем функцию(начало)
//тело функции
int res=a+c; //объявление и присваивание значения
return res; //возвращение значения переменной res
} //конец функции
//циклы
//предисловие 
//for (инициализация до цикла; условие; что сделать после цикла){тело цикла}
//сделай что-то, пока условие истина - !0
//while (условие){тело цикла}
//сделай что-то пока условие истина - !0
//постусловие
//do{тело цикла}
//сделай, потом проверь
//если условие всегда истина - бесконечный цикл
//выход Сtri+C
int arrays[SIZE]={0}; //объявил массив arrays, размером SIZE и заполнил нулями {0}
//обход по массиву через цикл
for(int i=0; i<SIZE; ++i){ //начало блока for
    //объявим переменную i со значеием 0-счётчик(для индексов arrays)
    //условие пока i меньше SIZE (от 0 до SIZE - 1)
    //инкримитируем (прибавляем +1 к i) в конце цикла
    arrays[i]=2; //заполнили все элементы 2
    printf("arrays[%d]=%d\n"; arrays[1]);
    //вывод индексов элементов массива и их значение
    //цикл заканчивается, выполняется ++i
} //конец блока
//вначале выполняется условие, потом выполняется блок
//вновь проверка условия, если истина выполняется блок
//пока условие не ложь
//обратный вывод массива
//for(int i=SIZE 1, i>=0, --1{}
//дойти до середины
//for(int i=0, i<SIZE/2, ++i){}
//два счётчика
//for(inr i=0, j=SIZE-1, i<SIZE, ++i, --j){}
//тоже самое, только через while
int chetchik=0;
while(chetchik<SIZE){
    arrays[chetchik]=2;
    printf("arrays[%d]=%d\n", chetchik, arrays[chetchik]);
    ++chetchik;
}
//если chetchik обнулить внутри while
//после каждой итерации он бы вновь равнялся 0
chetchk=0; //обнуляем
int sum=0; //объявляем и присваиваем значение 0 
while(chetchik<SIZE){
    sum+=chetchik; //0+1+2+3+4=10
    ++chetchik;
}

//Linux command
//pwd - показать путь где м.н?
//ls - показать содержимое каталога, где мы
//mkdir - создать каталог
//rwdir - удалить пустой каталог
//touch - создать файл
//rm - удалить файл
//rm-rf - удалить всё
//cd - перейти в каталог
//. - текущий каталог
//.. - каталогн выше
//code . - открыть VSCode из текущего каталога
//cd .. - перейти на каталог выше
// / - абсолютный путь (путь из системных файлов)
//cat - вывести содержимое файла в терминал
//git
//ssh-keygen - сгенерировать ключ ssh
//cat-ssh/id_rsa.pub - вывести ключ
//git config -- global.name - "ник"
//git branch - показать какая ветка
//git status - показать изменения
//git clone - ссылка ssh из github
//git add - добавить изменения для push
//git add . - добавить всё
//git commit -m "comment" - закомментировать изменения для push 
//git pull origin main(название ветки) - стянуть(скачать изменение для github
int mass [SIZE] = {0};
void fill (int*array, int size);
void printArray, int size);
int main (void){
    int*array=(int a)calloc(100, sizeof(int));
    //calloc - возвр. значение void*
    //100 - сколько ячеек
    //sizeof(int) - какого размера ячейки
    array[i];
    for(int i=0; i<100; ++i){
        scanf("%d",int*array int size);
        
}
void fill (int*array, int size){
    for (int i=0: i<size; ++i){
        scanf("%d",i,&array[i]);
    }
    printf ("%d": \n; SIZE);
    for (int i=0; i<SIZE; ++i);
    printf ("array[%d]= ",i);
    scanf("%d", &array[i]);
}
void printArray(int*array, int size){
    for(int i=0, i<size, ++i){
        printf("array[%d]=%d\n",i,array[i]);
    }
}
