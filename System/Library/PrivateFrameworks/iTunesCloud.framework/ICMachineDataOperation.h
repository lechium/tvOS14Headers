/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class NSData, ICStoreRequestContext;

@interface ICMachineDataOperation : ICAsyncOperation {

	NSData* _data;
	ICStoreRequestContext* _requestContext;
	long long _protocolVersion;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
@end
