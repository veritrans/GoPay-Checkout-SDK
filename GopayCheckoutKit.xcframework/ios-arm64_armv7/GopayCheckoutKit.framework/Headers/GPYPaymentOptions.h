//
//  GPYPaymentOptions.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYPaymentOptionsBalance.h"
#import "GPYPaymentOptionsMetadata.h"
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYPaymentOptions : NSObject <GPYMappable>

@property (nonatomic, nullable) NSString *name;
@property (nonatomic) BOOL active;
@property (nonatomic, nullable) GPYPaymentOptionsBalance *balance;
@property (nonatomic, nullable) GPYPaymentOptionsMetadata *metadata;
@property (nonatomic, nullable) NSString *token;

@end

NS_ASSUME_NONNULL_END
