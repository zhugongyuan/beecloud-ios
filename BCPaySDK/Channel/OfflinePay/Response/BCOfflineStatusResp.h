//
//  BCOfflineStatusResp.h
//  BCPay
//
//  Created by Ewenlong03 on 15/9/17.
//  Copyright © 2015年 BeeCloud. All rights reserved.
//

#import "BCBaseResp.h"
#import "BCOfflineStatusReq.h"

@interface BCOfflineStatusResp : BCBaseResp
@property (nonatomic, assign) BOOL payResult;
@end
