/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSRegularExpression;

@interface PLCoreDataSqlLogBinder : NSObject {

	NSString* _selectString;
	NSMutableArray* _bindValues;
	NSRegularExpression* _selectRegex;
	NSRegularExpression* _bindRegex;

}

@property (copy,readonly) NSString * boundSql; 
-(id)init;
-(void)addLogLine:(id)arg1 ;
-(NSString *)boundSql;
-(id)pool_boundSql;
@end

