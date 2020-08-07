//
//  GPYGopayDetails.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYGopayDetails : NSObject <GPYMappable>

@property (nonatomic) NSString *accountID;
@property (nonatomic) NSString *paymentOptionToken;


-(instancetype)initWithAccountID:(NSString *)accountID
              paymentOptionToken:(NSString *)paymentOptionToken;

@end

NS_ASSUME_NONNULL_END
