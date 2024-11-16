#include <iostream>

int main()
{
    //声明一个指向整数的指针
   int * ptr;

   
   //ip1，ip2是指向int类型的指针
   int *ip1,*ip2;
  
  
  //dp是双精度类型的变量，dp2是指向double类型的指针
   double dp,*dp2;
   int var =10;
   
   //ptr被赋值为var的内存地址 
   int *ptr2 =&var;
  
   //指向指针的指针
   int * *ptr_address =&ptr2;
   std::cout<<"var的地址为"<< &var << std::endl;
   std::cout<<"ptr2的存储的值为"<< ptr2 << std::endl;
   std::cout<<"ptr2的地址为:"<< &ptr2 << std::endl;
   std::cout<<"ptr_address存储的值为:"<< ptr_address <<std::endl;


   double dval=3.14;
   //int* p1 = &dval;
   //dp3指针指向dval的内存地址，pd2指向指针变量dp3，实际pd2和dp3都指向dval的内存地址
   double * dp3=&dval;
   double* pd2 =dp3;

   //访问对象
   int ival=24;
   int * p_int=&ival;
    std::cout<<"p_int访问对象的值为:"<<*p_int<< std::endl;
    //通过指针p_int修改ivl的值,解引用操作*p_int表示获取p_int所指向的内存中的值
    //解引用操作仅适用于那些确实指向了某个对象的有效指针
    *p_int=43;
    std::cout<<"ival ="<<ival<<std::endl;
    std::cout<<"*p_int ="<<*p_int<<std::endl; 


    //空指针 //解引用操作仅适用于那些确实指向了某个对象的有效指针
    // int* empty_poiter = nullptr;
    //空指针不能解引用
    //*empty_poiter = 0;


    //& *
    int ival2 = 42;

    //&紧跟着类型名（int）出现，并且在声明中，表示r是一个引用类型
    int &r =ival2;

    //*紧跟着类型名（int）出现，并且在声明中，表示p是一个指针类型
    int *p;

    //&出现在表达式中，表示取地址
    p=&ival2;
    //*出现在表达式中，表示解引用修改值
    *p =43;

    //&是声明的一部分，表示r2是一个引用】
    //*是表达式的一部分，表示解引用*p取出ival2的值
    //r2是ival2的引用
    int &r2 = *p;
    r2 =1024;
    std::cout<<"ival2 ="<<ival2<<std::endl;


    //指针之间赋值
    int ival3 =42;
    //pval3被初始化，但没有指向任何对象
    int *pval3=nullptr;
    int *pval4=&ival3;
    //pval3也指向了ival3
    pval3=pval4;
    std::cout<<"ival3的地址为:"<<&ival3<<std::endl;
    std::cout<<"pval3指向的地址为:"<<pval3<<std::endl;
    std::cout<<"pval4指向的地址为:"<<pval4<<std::endl;


    //空指针判断
    int * empty_ptr =nullptr;
    if(!empty_ptr)
    {
        std::cout<<"empty_ptr是一个空指针"<<std::endl;
    }

    int test =100;
    int*normal_ptr= &test;
    if(normal_ptr)
    {
        std::cout<<"normal_ptr是一个非空指针"<<std::endl;
    }

    if(normal_ptr != empty_ptr)
    {
        std::cout<<"normal_ptr is not equal to empty_ptr"<<std::endl;
    }

    if (normal_ptr == empty_ptr)
    {
        std::cout<<"normal_ptr is  equal to empty_ptr"<<std::endl;
    }
    

    //指针的本身存储数据固定就是8个字节的地址
    std::cout<<sizeof(pval3)<<std::endl;
    std::cout<<sizeof(empty_ptr)<<std::endl;
    std::cout<<sizeof(pd2)<<std::endl;


    //万能指针 void*
    double obj =3.14, * obj_pd =&obj;
    void * pv=&obj;
    std::cout<<"pv size is "<<sizeof(pv)<<std::endl;
    pv=obj_pd;
    std::cout<<*((double*)pv)<<std::endl;


    //指向指针的指针
    int ival4 = 1024;
    int *pival4 = &ival4;
    int **ppi=&pival4;
    std::cout<<"The value of ival\n"
             <<"direct value: "<<ival4<<"\n"
             <<"indirect value: "<<*pival4<<"\n"
             <<"doubly indirect value: "<<**ppi
             <<std::endl;


    //指向指针的引用
    int init=1024;
    int *pinit=nullptr;
    int *&rinit=pinit;
    rinit=&init;
    std::cout<<"pinit:"<<pinit<<std::endl;
    std::cout<<"rinit:"<<rinit<<std::endl;


//指针所指数组地址为第一个元素地址，前一个元素地址+地址长度(如int类型为4字节)=后一个元素地址
int arr[5]= {1,2,3,4,5};
int *ptr_arr =arr;
std::cout<<"数组首地址，第一个元素地址为:"<<ptr_arr<<std::endl;
std::cout<<"数组第一个元素为:"<<*ptr_arr<<std::endl;
*ptr_arr=10;
std::cout<<"数组第一个元素为:"<<*ptr_arr<<std::endl;
std::cout<<"数组第二个元素为:"<<*(ptr_arr+1)<<std::endl;
std::cout<<"数组第二个元素的地址为:"<<(ptr_arr+1)<<std::endl;
   return 0;
}
