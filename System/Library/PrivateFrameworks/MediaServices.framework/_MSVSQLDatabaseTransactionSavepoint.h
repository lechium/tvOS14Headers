/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSVSQLDatabaseTransactionSavepoint.h>

@class NSString, MSVSQLDatabaseTransaction;

@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint> {

	NSString* _name;
	MSVSQLDatabaseTransaction* _transaction;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(BOOL)commit;
@end

