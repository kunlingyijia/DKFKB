//
//  DWCommonParm.h
//  DWduifubao
//
//  Created by kkk on 16/9/8.
//  Copyright © 2016年 bianming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DWCommonParm : NSObject

+ (instancetype)sharedInstance;
@property (nonatomic, strong) BaseViewController *homePageController;
@property (nonatomic, strong) BaseViewController *classPageController;
@property (nonatomic, strong) BaseViewController *shopPageController;
@property (nonatomic, strong) BaseViewController *myPageController;

@end