//
//  GPYCustomerDetails.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYCustomerDetails : NSObject <GPYMappable>

@property (nonatomic) NSString *phoneNumber;
@property (nonatomic, nullable) NSString *firstName;
@property (nonatomic, nullable) NSString *lastName;
@property (nonatomic, nullable) NSString *email;


- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber
                          firstName:(NSString * _Nullable)firstName
                           lastName:(NSString *_Nullable)lastName
                              email:(NSString *_Nullable)email;



@end

NS_ASSUME_NONNULL_END
