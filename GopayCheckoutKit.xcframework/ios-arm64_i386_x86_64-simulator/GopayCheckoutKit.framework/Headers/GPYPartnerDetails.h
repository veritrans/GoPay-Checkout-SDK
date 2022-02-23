//
//  GPYPartnerDetails.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYPartnerDetails : NSObject <GPYMappable>

@property (nonatomic) NSString *phoneNumber;
@property (nonatomic) NSString *countryCode;

-(instancetype)initWithPhoneNumber:(NSString *)phoneNumber
                       countryCode:(NSString *)countryCode;

@end

NS_ASSUME_NONNULL_END
