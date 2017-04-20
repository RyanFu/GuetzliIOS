
//#include <android/log.h>


#define LOG_TAG "JNILOG" // 这个是自定义的LOG的标识
#import <Foundation/Foundation.h>
namespace{

void printD(const char *str)
{
    NSLog("🌑 %s:%s",LOG_TAG, str);
}


void printI(const char *str)
{
    
    NSLog("🔵 %s:%s",LOG_TAG, str);
    
}


void printE(const char *str)
{
    NSLog("⭕ %s:%s",LOG_TAG, str);
}

}
