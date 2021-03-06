/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {

	AVMetadataItemValueRequestInternal* _valueRequest;

}

@property (__weak,readonly) AVMetadataItem * metadataItem; 
+(id)metadataItemValueRequestWithMetadataItem:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(id)value;
-(id)dataType;
-(AVMetadataItem *)metadataItem;
-(void)respondWithError:(id)arg1 ;
-(void)respondWithValue:(id)arg1 ;
-(id)initWithMetadataItem:(id)arg1 ;
-(void)respondWithValue:(id)arg1 dataType:(id)arg2 ;
@end

