//
//  GPYMappable.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 15/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

@protocol GPYMappable <NSObject>
 
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)dictionaryValue;
 
@end
