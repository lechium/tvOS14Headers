/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(MIDINetworkHost *)host;
@end

