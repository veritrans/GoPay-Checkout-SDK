//
//  GPYAccountInfo.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYAccountMetadata.h"
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYAccountInfo : NSObject <GPYMappable>

@property (nonatomic) NSString *statusCode;
@property (nonatomic) NSString *paymentType;
@property (nonatomic, nullable) NSString *accountID;
@property (nonatomic, nullable) NSString *accountStatus;
@property (nonatomic, nullable) NSString *channelResponseCode;
@property (nonatomic, nullable) NSString *channelResponseMessage;
@property (nonatomic, nullable) GPYAccountMetadata *metadata;

@end

NS_ASSUME_NONNULL_END
