/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol REElementDataSourceProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
@required
-(NSString *)name;
-(unsigned long long)state;
-(BOOL)isRunning;
-(NSDictionary *)dataSourceProperties;

@end

