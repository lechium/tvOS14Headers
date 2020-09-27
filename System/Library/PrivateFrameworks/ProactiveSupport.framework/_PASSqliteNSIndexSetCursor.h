/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic,retain) NSIndexSet * collection; 
+(const char*)sqliteMethodName;
+(const char*)sqliteCreateTableStatement;
+(double)baseEstimatedRows;
+(double)baseEstimatedCost;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(BOOL)canOrderByValue:(BOOL)arg1 ;
-(void)setCollection:(NSIndexSet *)arg1 ;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyValueSort:(BOOL)arg1 ;
@end
