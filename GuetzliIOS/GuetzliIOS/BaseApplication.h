//
//  BaseApplication.h
//  ios_helloworld
//
//  Created by wei on 2017/3/28.
//  Copyright © 2017年 wei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseApplication : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic)   UIWindow *window;

//实例化 window
- (void)initUIWindow;
@end
