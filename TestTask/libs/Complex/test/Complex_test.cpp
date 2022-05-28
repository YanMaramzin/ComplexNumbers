#include <gtest/gtest.h>
#include "Complex.h"


/**
* @brief создание объектов класса Complex
*/
TEST(ComplexTests, Creating) {
    Complex<short> testedObject1;
    Complex<short> testedObject2(1,1);

    Complex<int> testedObject3;
    Complex<int> testedObject4(1,1);

    Complex<float> testedObject5;
    Complex<float> testedObject6(1,1);

    Complex<double> testedObject7;
    Complex<double> testedObject8(1,1);
}

/**
* @brief проверяет выводит ли Complex свою вещественную часть
*/
TEST(ComplexTests, TakeRe) {
   Complex<short> testedObject(2,3);
   Complex<int> testedObject1(1,1);
   Complex<float> testedObject2(3.0f,3.1);
   Complex<long double> testedObject3(3,3.1);

   ASSERT_EQ(testedObject.real(), 2);
   ASSERT_EQ(testedObject1.real(),1);
   ASSERT_EQ(testedObject2.real(),3);
   ASSERT_EQ(testedObject3.real(), 3);

}

/**
* @brief проверяет выводит ли Complex свою мнимаю часть
*/
TEST(ComplexTests, TakeIm) {
    Complex<short> testedObject(2,3);
    Complex<int> testedObject1(1,1);
    Complex<float> testedObject2(3.0f,3.1);
    Complex<double> testedObject3(3,3.1);

   ASSERT_EQ(testedObject.imag(), 3);
   ASSERT_EQ(testedObject1.imag(),1);
   ASSERT_EQ(testedObject2.imag(),(float)3.1);
   ASSERT_EQ(testedObject3.imag(),3.1);
}

/**
* @brief проверяет правильно ли вычисляется модуль комлесного числа в градусах
*/
TEST(ComplexTests, Abs) {
   Complex<short> testedObject(1,5);
   Complex<int> testedObject1(1,1);
   Complex<float> testedObject2(1,1);
   Complex<double> testedObject3(2,1);


   ASSERT_EQ(testedObject.abs(),(short)sqrt(26));
   ASSERT_EQ(testedObject1.abs(),(int)sqrt(2));
   ASSERT_EQ(testedObject2.abs(), (float)sqrt(2));
   ASSERT_EQ(testedObject3.abs(), sqrt(5));

}

/**
* @brief проверяет правильно ли вычисляется аргумент комлесного числа в радианах
*/
TEST(ComplexTests,Arg)
{
    Complex<short> testedObject(1,5);
    Complex<int> testedObject1(1,1);
    Complex<float> testedObject2(1,1);
    Complex<double> testedObject3(2,1);

    ASSERT_EQ(testedObject.arg(),(short)atan(5));
    ASSERT_EQ(testedObject1.arg(),(int)atan(1));
    ASSERT_EQ(testedObject2.arg(), (float)atan(1));
    ASSERT_EQ(testedObject3.arg(), atan(0.5));

}


/**
* @brief проверяет правильно ли вычисляется аргумент комлесного числа в градусах
*/
TEST(ComplexTests,ArgDeg)
{
    Complex<short> testedObject(1,1);
    Complex<int> testedObject1(1,1);
    Complex<float> testedObject2(1,1);
    Complex<double> testedObject3(2,1);

    ASSERT_EQ(testedObject.argDeg(),0);
    ASSERT_EQ(testedObject1.argDeg(),0);
    ASSERT_EQ(testedObject2.argDeg(), (float)(atan(1)*180/M_PI));
    ASSERT_EQ(testedObject3.argDeg(), atan(0.5)*180/M_PI);
}

/**
* @brief проверяет работает ли префиксный инкремент для класса Complex
*/
TEST(ComplexTests,PrefIncrement)
{
    Complex<short> testedObject(1,5);
    ++testedObject;
    Complex<int> testedObject1(1,1);
    ++testedObject1;
    Complex<float> testedObject2(1,1);
    ++testedObject2;
    Complex<double> testedObject3(2,1);
    ++testedObject3;

    ASSERT_EQ(testedObject.real(),2);
    ASSERT_EQ(testedObject.imag(),5);

    ASSERT_EQ(testedObject1.real(),2);
    ASSERT_EQ(testedObject1.imag(),1);

    ASSERT_EQ(testedObject2.real(),2);
    ASSERT_EQ(testedObject2.imag(),1);

    ASSERT_EQ(testedObject3.real(),3);
    ASSERT_EQ(testedObject3.imag(),1);

}

/**
* @brief проверяет работает ли постфиксный инкремент для класса Complex
*/
TEST(ComplexTests,PostImcrement)
{
    Complex<short> testedObject(1,5);
    Complex<short> t1=testedObject++;
    ASSERT_EQ(t1.real(),1);
    ASSERT_EQ(testedObject.real(),2);

    Complex<int> testedObject1(1,1);
    Complex<int> t2=testedObject1++;
    ASSERT_EQ(t2.real(),1);
    ASSERT_EQ(testedObject1.real(),2);

    Complex<float> testedObject2(1,1);
    Complex<float> t3=testedObject2++;
    ASSERT_EQ(t3.real(),1);
    ASSERT_EQ(testedObject2.real(),2);


    Complex<double> testedObject3(2,1);
    Complex<double> t4=testedObject3++;
    ASSERT_EQ(t4.real(),2);
    ASSERT_EQ(testedObject3.real(),3);
}

/**
* @brief проверяет работает ли префиксный декремент для класса Complex
*/
TEST(ComplexTests,PreDecrement)
{
    Complex<short> testedObject(1,5);
    --testedObject;
    Complex<int> testedObject1(1,1);
    --testedObject1;
    Complex<float> testedObject2(1,1);
    --testedObject2;
    Complex<double> testedObject3(2,1);
    --testedObject3;

    ASSERT_EQ(testedObject.real(),0);
    ASSERT_EQ(testedObject.imag(),5);

    ASSERT_EQ(testedObject1.real(),0);
    ASSERT_EQ(testedObject1.imag(),1);

    ASSERT_EQ(testedObject2.real(),0);
    ASSERT_EQ(testedObject2.imag(),1);

    ASSERT_EQ(testedObject3.real(),1);
    ASSERT_EQ(testedObject3.imag(),1);;
}

/**
* @brief проверяет работает ли постфиксный декремент для класса Complex
*/

TEST(ComplexTests,PostDecrement)
{
    Complex<short> testedObject(1,5);
    Complex<short> t1=testedObject--;
    ASSERT_EQ(t1.real(),1);
    ASSERT_EQ(testedObject.real(),0);

    Complex<int> testedObject1(1,1);
    Complex<int> t2=testedObject1--;
    ASSERT_EQ(t2.real(),1);
    ASSERT_EQ(testedObject1.real(),0);

    Complex<float> testedObject2(1,1);
    Complex<float> t3=testedObject2--;
    ASSERT_EQ(t3.real(),1);
    ASSERT_EQ(testedObject2.real(),0);


    Complex<double> testedObject3(2,1);
    Complex<double> t4=testedObject3--;
    ASSERT_EQ(t4.real(),2);
    ASSERT_EQ(testedObject3.real(),1);
}

/**
* @brief Тест, который проверяет правильно работает ли бинарный плюс для класса Complex
*/
TEST(ComplexTests,Plus)
{
    Complex<short> testedObject(1,5);
    Complex<short> testedObject1(1,5);
    testedObject1=testedObject1+testedObject;
    ASSERT_EQ(testedObject1.real(),2);
    ASSERT_EQ(testedObject1.imag(),10);

    Complex<int> testedObject2(1,1);
    Complex<int> testedObject3(1,1);
    testedObject3=testedObject3+testedObject2;
    ASSERT_EQ(testedObject3.real(),2);
    ASSERT_EQ(testedObject3.imag(),2);

    Complex<float> testedObject4(1,1);
    Complex<float> testedObject5(1,1);
    testedObject5=testedObject5+testedObject4;
    ASSERT_EQ(testedObject5.real(),2);
    ASSERT_EQ(testedObject5.imag(),2);

    Complex<double> testedObject6(2,1);
    Complex<double> testedObject7(2,1);
    testedObject7=testedObject7+testedObject6;
    ASSERT_EQ(testedObject7.real(),4);
    ASSERT_EQ(testedObject7.imag(),2);
}

/**
* @brief Тест, который проверяет правильно работает ли бинарный минус для класса Complex
*/
TEST(ComplexTests,Minus)
{
    Complex<short> testedObject(1,5);
    Complex<short> testedObject1(2,10);
    testedObject1=testedObject1-testedObject;
    ASSERT_EQ(testedObject1.real(),1);
    ASSERT_EQ(testedObject1.imag(),5);

    Complex<int> testedObject2(2,2);
    Complex<int> testedObject3(1,1);
    testedObject3=testedObject3-testedObject2;
    ASSERT_EQ(testedObject3.real(),-1);
    ASSERT_EQ(testedObject3.imag(),-1);

    Complex<float> testedObject4(3,5);
    Complex<float> testedObject5(1,1);
    testedObject5=testedObject5-testedObject4;
    ASSERT_EQ(testedObject5.real(),-2);
    ASSERT_EQ(testedObject5.imag(),-4);

    Complex<double> testedObject6(10,20);
    Complex<double> testedObject7(20,11);
    testedObject7=testedObject7-testedObject6;
    ASSERT_EQ(testedObject7.real(),10);
    ASSERT_EQ(testedObject7.imag(),-9);
}

/**
* @brief Тест, который проверяет правильно работает ли унарный минус для класса Complex
*/

TEST(ComplexTests,UnaryMinus)
{
    Complex<short> testedObject(1,1);
    testedObject=-testedObject;
    ASSERT_EQ(testedObject.real(),-1);
    ASSERT_EQ(testedObject.imag(),-1);

    Complex<int> testedObject1(1,1);
    testedObject1=-testedObject1;
    ASSERT_EQ(testedObject1.real(),-1);
    ASSERT_EQ(testedObject1.imag(),-1);

    Complex<float> testedObject2(1,1);
    testedObject2=-testedObject2;
    ASSERT_EQ(testedObject2.real(),-1);
    ASSERT_EQ(testedObject2.imag(),-1);

    Complex<double> testedObject3(2,1);
    testedObject3=-testedObject3;
    ASSERT_EQ(testedObject3.real(),-2);
    ASSERT_EQ(testedObject3.imag(),-1);

}


/**
* @brief проверяет можно ли передать массив класса Complex в файл
* и чтение из файла с последующей записью в новый массив и сравнение
* значений элементов старого и нового массива
*/
TEST(ComplexTests,Array)
{
    Complex<double> c[5];
    for(size_t i=0; i!=5;++i)
        c[i]=Complex(i*1.0,i*1.0);
    std::ofstream fout("out.txt");
    for(size_t i=0; i<5;++i)
        fout<<c[i];

    Complex<double> c1[5];
    std::ifstream fin("out.txt");

    for(size_t i=0; !fin.eof();++i)
        fin>>c1[i];
    for(size_t i=0; i!=5;++i)
        ASSERT_EQ(c1[i],c[i]);
}
