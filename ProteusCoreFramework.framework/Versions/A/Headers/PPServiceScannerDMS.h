//
//  PPServiceScannerDMS.h
//  ProteusCoreFramework
//
//  Created by Yazeid Rahman on 16/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PPDeviceScanner.h"
#import "PPArray.h"

@interface PPServiceScannerDMS : PPDeviceScanner

+(PPArray *)getServiceList;
@end
