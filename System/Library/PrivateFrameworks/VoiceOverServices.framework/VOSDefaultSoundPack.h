/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VOSSoundPack.h>

@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject <VOSSoundPack>

@property (nonatomic,readonly) NSDictionary * eventToSoundFilenameMapping; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)eventToSoundFilenameMapping;
-(id)soundAssetURLForOutputEvent:(id)arg1 ;
@end
