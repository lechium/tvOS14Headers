/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface ML3DatabaseRecoveryOperation : NSOperation {

	NSString* _path;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSString *)path;
-(void)main;
-(void)_recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDatabaseFilePath:(id)arg1 ;
-(id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2 ;
-(id)_lastCorruptionRestoreAttemptDate;
-(void)_updateLastCorruptionRestoreAttemptDate;
@end

