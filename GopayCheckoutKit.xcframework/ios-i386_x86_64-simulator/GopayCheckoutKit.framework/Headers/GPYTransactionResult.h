//
//  GPYTransactionResult.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 01/06/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"
#import "GPYCreateTransactionActions.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYTransactionResult : NSObject <GPYMappable>

@property (nonatomic) NSString *statusCode;
@property (nonatomic) NSString *statusMessage;
@property (nonatomic) NSString *transactionId;
@property (nonatomic) NSString *orderId;
@property (nonatomic) NSString *grossAmount;
@property (nonatomic) NSString *currency;
@property (nonatomic) NSString *paymentType;
@property (nonatomic) NSString *transactionTime;
@property (nonatomic) NSString *transactionStatus;
@property (nonatomic) NSString *fraudStatus;
@property (nonatomic, nullable) NSString *channelResponseCode;
@property (nonatomic, nullable) NSString *channelResponseMessage;

@end

NS_ASSUME_NONNULL_END

