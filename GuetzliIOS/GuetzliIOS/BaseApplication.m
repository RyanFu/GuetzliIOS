//
//  BaseApplication.m
//  ios_helloworld
//
//  Created by wei on 2017/3/28.
//  Copyright © 2017年 wei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseApplication.h"

@interface BaseApplication ()

@end

@implementation BaseApplication

- (void)initUIWindow
{
    
//    self.window = [UIWindow new];
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen]bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
}

@end
