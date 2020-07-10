//
//  GPYTransactionDetails.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYTransactionDetails : NSObject <GPYMappable>

@property (nonatomic) NSNumber *grossAmount;
@property (nonatomic) NSString *orderID;
@property (nonatomic) NSString *currency;

-(instancetype)initWithGrossAmount:(NSNumber *)grossAmount
                           orderID:(NSString *)orderID
                          currency:(NSString *)currency;

@end

NS_ASSUME_NONNULL_END
