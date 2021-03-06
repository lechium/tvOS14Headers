/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RPRequestRegistration : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	/*^block*/id _handler;
	/*^block*/id _cnxHandler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id cnxHandler;                       //@synthesize cnxHandler=_cnxHandler - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)cnxHandler;
-(void)setCnxHandler:(id)arg1 ;
@end

