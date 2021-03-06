/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCryptoPairingSessionDelegate;
#import <MediaRemote/MediaRemote-Structs.h>
@class MRDeviceInfo, NSArray;

@interface MRCryptoPairingSession : NSObject {

	MRDeviceInfo* _device;
	unsigned long long _role;
	id<MRCryptoPairingSessionDelegate> _delegate;

}

@property (nonatomic,readonly) MRDeviceInfo * device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                                       //@synthesize role=_role - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (assign,nonatomic,__weak) id<MRCryptoPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)open;
-(void)close;
-(id<MRCryptoPairingSessionDelegate>)delegate;
-(void)setDelegate:(id<MRCryptoPairingSessionDelegate>)arg1 ;
-(MRDeviceInfo *)device;
-(unsigned long long)role;
-(NSArray *)pairedDevices;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(BOOL)isPaired;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
@end

