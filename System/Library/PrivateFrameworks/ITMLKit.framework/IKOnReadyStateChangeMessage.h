/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface IKOnReadyStateChangeMessage : NSObject {

	unsigned _readyState;
	unsigned _statusCode;
	NSString* _statusText;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned readyState;              //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) unsigned statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusText;                //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSError * error;                      //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(unsigned)statusCode;
-(void)setError:(NSError *)arg1 ;
-(unsigned)readyState;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(id)initWithReadyState:(unsigned)arg1 statusCode:(unsigned)arg2 statusText:(id)arg3 error:(id)arg4 ;
@end
