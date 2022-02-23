//
//  GPYVendor.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 14/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GPYVendor : NSObject

@property (nonatomic) NSString *merchantSeverURL;
@property (nonatomic) NSString *clientKey;
@property (nonatomic) NSString *callbackUrl;
@property (nonatomic) NSString *merchantId;
@property (nonatomic) BOOL isLoggingEnabled;

+ (GPYVendor *)shared;

@end

NS_ASSUME_NONNULL_END

