//
//  SymbolModel.m
//  LinkMap
//
//  Created by Suteki(67111677@qq.com) on 4/8/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import "ObjectModel.h"

@implementation ObjectModel

@end

@implementation SymbolModel
- (NSString *)description {
    return [NSString stringWithFormat:@"%@ %fkb %@", _addr, _size/1024.0, _content];
}
@end

