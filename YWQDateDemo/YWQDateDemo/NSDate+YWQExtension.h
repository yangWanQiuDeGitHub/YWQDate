//
//  NSDate+YWQExtension.h
//  01-百思不得姐
//
//  Copyright  All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (YWQExtension)
/**
 * 比较from和self的时间差值
 */
- (NSDateComponents *)deltaFrom:(NSDate *)from;

/**
 * 是否为今年
 */
- (BOOL)isThisYear;

/**
 * 是否为今天
 */
- (BOOL)isToday;

/**
 * 是否为昨天
 */
- (BOOL)isYesterday;
@end
