//
//  PPScanner.h
//  ProteusCoreFramework
//
//  Created by Yazeid Rahman on 16/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProteusCoreFramework.h"

@protocol PPScannerDelegate <NSObject>

@required
-(void)onScannerCallback:(NSArray *)devices;

@end

@interface PPScanner : ProteusCoreFramework <ProteusLinkerFrameworkProtocol>

+(BOOL)isOnline;
+(BOOL)isPollingEnabled;

+(BOOL)startScan:(id)delegate withInterval:(int)pollingInterval;
+(BOOL)stopScan;
+(BOOL)setPollingInterval:(int)pollingInteval;

@end
