/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CUBluetoothRelayMessage : NSObject {

	int _messageType;
	/*^block*/id _completionHandler;
	NSString* _conduitDeviceID;
	NSString* _destinationAddress;
	NSString* _sourceAddress;
	NSData* _messageData;

}

@property (nonatomic,copy) NSString * sourceAddress;                   //@synthesize sourceAddress=_sourceAddress - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * conduitDeviceID;                 //@synthesize conduitDeviceID=_conduitDeviceID - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;              //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSData * messageData;                       //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) int messageType;                          //@synthesize messageType=_messageType - In the implementation block
-(id)description;
-(int)messageType;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setMessageType:(int)arg1 ;
-(NSString *)destinationAddress;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(void)setSourceAddress:(NSString *)arg1 ;
-(NSString *)conduitDeviceID;
-(void)setConduitDeviceID:(NSString *)arg1 ;
-(NSString *)sourceAddress;
@end

