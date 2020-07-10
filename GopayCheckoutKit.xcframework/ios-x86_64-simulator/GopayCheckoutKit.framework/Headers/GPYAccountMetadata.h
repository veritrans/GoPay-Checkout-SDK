//
//  GPYAccountMetadata.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYPaymentOptions.h"
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYAccountMetadata : NSObject <GPYMappable>
@property (nonatomic, nullable) NSArray <GPYPaymentOptions *> *paymentOptions;
@end

NS_ASSUME_NONNULL_END
