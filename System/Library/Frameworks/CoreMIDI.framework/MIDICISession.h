/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSArray, NSMutableArray, MIDICIDeviceInfo, NSNumber;

@interface MIDICISession : NSObject {

	unsigned _client;
	unsigned _destination;
	NSArray* _supportedProtocols;
	NSMutableArray* _profileStates;
	/*^block*/id _profileChangedCallback;
	/*^block*/id _sessionDisconnectCallback;
	/*^block*/id _profileSpecificDataCallback;
	BOOL _supportsProfileCapability;
	BOOL _supportsPropertyCapability;
	MIDICIDeviceInfo* _deviceInfo;
	unsigned _ciSessionRef;
	unsigned _maxSysExSize;
	unsigned char _maxRequests;
	MIDICIDeviceIdentification _deviceID;
	/*^block*/id _propertyChangedCallback;
	/*^block*/id _propertyResponseCallback;
	/*^block*/id _profileSpecificDataHandler;

}

@property (nonatomic,copy) id propertyChangedCallback; 
@property (nonatomic,copy) id propertyResponseCallback; 
@property (nonatomic,copy) id disconnectBlock;                                   //@synthesize sessionDisconnectCallback=_sessionDisconnectCallback - In the implementation block
@property (nonatomic,copy) id profileSpecificDataBlock;                          //@synthesize profileSpecificDataCallback=_profileSpecificDataCallback - In the implementation block
@property (nonatomic,readonly) MIDICIDeviceIdentification deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) id propertyResponseCallback;                          //@synthesize propertyResponseCallback=_propertyResponseCallback - In the implementation block
@property (nonatomic,copy) id propertyChangedCallback;                           //@synthesize propertyChangedCallback=_propertyChangedCallback - In the implementation block
@property (nonatomic,readonly) unsigned entity; 
@property (nonatomic,readonly) unsigned midiDestination;                         //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL supportsProfileCapability;                   //@synthesize supportsProfileCapability=_supportsProfileCapability - In the implementation block
@property (nonatomic,readonly) BOOL supportsPropertyCapability;                  //@synthesize supportsPropertyCapability=_supportsPropertyCapability - In the implementation block
@property (nonatomic,readonly) MIDICIDeviceInfo * deviceInfo;                    //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) NSNumber * maxSysExSize; 
@property (nonatomic,readonly) NSNumber * maxPropertyRequests; 
@property (nonatomic,copy) id profileChangedCallback;                            //@synthesize profileChangedCallback=_profileChangedCallback - In the implementation block
@property (nonatomic,copy) id profileSpecificDataHandler;                        //@synthesize profileSpecificDataHandler=_profileSpecificDataHandler - In the implementation block
+(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned)entity;
-(MIDICIDeviceIdentification)deviceID;
-(void)setDisconnectBlock:(id)arg1 ;
-(id)disconnectBlock;
-(MIDICIDeviceInfo *)deviceInfo;
-(unsigned)midiDestination;
-(id)initWithDiscoveredNode:(id)arg1 dataReadyHandler:(/*^block*/id)arg2 disconnectHandler:(/*^block*/id)arg3 ;
-(id)initWithMIDIEntity:(unsigned)arg1 dataReadyHandler:(/*^block*/id)arg2 ;
-(id)initWithMIDIDestination:(unsigned)arg1 dataReadyHandler:(/*^block*/id)arg2 disconnectHandler:(/*^block*/id)arg3 profileSpecificDataHandler:(/*^block*/id)arg4 ;
-(id)initWithMIDIDestination:(unsigned)arg1 dataReadyHandler:(/*^block*/id)arg2 ;
-(NSNumber *)maxSysExSize;
-(NSNumber *)maxPropertyRequests;
-(void)handleCINotification:(const MIDINotification*)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)profileStateForChannel:(unsigned char)arg1 ;
-(BOOL)enableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)disableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)toggleProfile:(id)arg1 onChannel:(unsigned char)arg2 enabling:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)sendProfile:(id)arg1 onChannel:(unsigned char)arg2 profileData:(id)arg3 ;
-(void)addProfileState:(char*)arg1 length:(unsigned)arg2 channel:(unsigned char)arg3 ;
-(BOOL)updateProfileStateForChannel:(unsigned char)arg1 withProfile:(id)arg2 enabled:(BOOL)arg3 ;
-(BOOL)supportsProfileCapability;
-(BOOL)supportsPropertyCapability;
-(id)profileChangedCallback;
-(void)setProfileChangedCallback:(id)arg1 ;
-(id)profileSpecificDataBlock;
-(void)setProfileSpecificDataBlock:(id)arg1 ;
-(id)propertyResponseCallback;
-(void)setPropertyResponseCallback:(id)arg1 ;
-(id)propertyChangedCallback;
-(void)setPropertyChangedCallback:(id)arg1 ;
-(id)profileSpecificDataHandler;
-(void)setProfileSpecificDataHandler:(id)arg1 ;
-(void)hasProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)getProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(/*^block*/id)arg3 ;
@end
