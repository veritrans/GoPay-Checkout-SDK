//
//  GPYItemDetails.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYItemDetails : NSObject <GPYMappable>

@property (nonatomic, nullable) NSString *itemID;
@property (nonatomic, nullable) NSString *name;
@property (nonatomic, nullable) NSNumber *price;
@property (nonatomic, nullable) NSNumber *quantity;
@property (nonatomic, nullable) NSString *category;


- (instancetype)initWithIthItemID:(NSString *)itemID
                             name:(NSString *)name
                            price: (NSNumber *)price
                         quantity:(NSNumber *)quantity
                         category:(NSString *)category;

@end

NS_ASSUME_NONNULL_END
