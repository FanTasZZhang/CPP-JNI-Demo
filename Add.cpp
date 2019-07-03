#include "Add.h"
#include <iostream>
#include "TwoNo.cpp"
using namespace std;

JNIEXPORT jint JNICALL Java_Add_add (JNIEnv * env, jobject obj, jint a, jint b)
{
  TwoNo t(a,b);
  return t.Add();
}
