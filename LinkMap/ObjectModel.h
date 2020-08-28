//
//  SymbolModel.h
//  LinkMap
//
//  Created by Suteki(67111677@qq.com) on 4/8/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectModel : NSObject

@property (nonatomic, copy) NSString *file;//文件
@property (nonatomic, assign) NSUInteger size;//大小

@end


@interface SymbolModel : NSObject
@property (nonatomic, strong) NSString *addr;
@property (nonatomic, assign) int64_t size;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) ObjectModel *object;
@end

