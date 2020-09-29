/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHAsset, PHAssetResource;

@interface MiroAssetRequest : NSObject {

	BOOL _isLocal;
	int _requestID;
	PHAsset* _asset;
	PHAssetResource* _resource;
	double _progress;
	double _sizeFactor;

}

@property (nonatomic,retain) PHAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) int requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double sizeFactor;                       //@synthesize sizeFactor=_sizeFactor - In the implementation block
-(id)description;
-(double)progress;
-(BOOL)isLocal;
-(void)setProgress:(double)arg1 ;
-(PHAssetResource *)resource;
-(int)requestID;
-(void)setRequestID:(int)arg1 ;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setResource:(PHAssetResource *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(double)sizeFactor;
-(void)setSizeFactor:(double)arg1 ;
@end

