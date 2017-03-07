//
//  DownloadManager.h
//  UserNotification
//
//  Created by 刘明 on 16/9/23.
//  Copyright © 2016年 刘明. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Macro.h"

@interface DownloadManager : NSObject

@property (nonatomic, copy) void (^progressBlock)(float persent);
@property (nonatomic, copy) void (^completionBlock)(BOOL finish, BOOL stop);

MInterfaceSharedInstance(sharedInstance)

- (void)start;

- (void)pause;

- (void)stop;

- (NSString *)localPath;

- (void)clear;

@end
