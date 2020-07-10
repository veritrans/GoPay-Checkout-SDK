//
//  GPYPaymentOptionsBalance.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYPaymentOptionsBalance : NSObject <GPYMappable>

@property (nonatomic) NSString *value;
@property (nonatomic) NSString *currency;

@end

NS_ASSUME_NONNULL_END

