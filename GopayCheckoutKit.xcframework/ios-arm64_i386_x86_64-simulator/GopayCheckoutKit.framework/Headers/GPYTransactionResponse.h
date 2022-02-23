//
//  GPYTransactionResponse.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 01/06/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYTransactionResult.h"
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYTransactionResponse : GPYTransactionResult <GPYMappable>

@property (nonatomic, nullable) NSArray <GPYCreateTransactionActions *> *actions;

@end

NS_ASSUME_NONNULL_END

