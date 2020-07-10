//
//  GPYDisableAccountResult.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYDisableAccountResult : NSObject <GPYMappable>

@property (nonatomic) NSString *statusCode;
@property (nonatomic) NSString *paymentType;
@property (nonatomic) NSString *accountID;
@property (nonatomic, nullable) NSString *accountStatus;
@property (nonatomic, nullable) NSString *channelResponseCode;
@property (nonatomic, nullable) NSString *channelResponseMessage;

@end

NS_ASSUME_NONNULL_END
