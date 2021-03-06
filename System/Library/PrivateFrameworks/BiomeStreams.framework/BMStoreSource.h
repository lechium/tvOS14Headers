/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMSource.h>

@class BMStreamDatastoreWriter;

@interface BMStoreSource : BMSource {

	BMStreamDatastoreWriter* _writer;

}
-(void)sendEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
@end

