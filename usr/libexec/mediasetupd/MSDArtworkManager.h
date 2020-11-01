//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MSDArtworkManager : NSObject
{
    NSString *_serviceIconImageName;	// 8 = 0x8
    double _iconImageScale;	// 16 = 0x10
    struct CGSize _iconImageSize;	// 24 = 0x18
    NSURL *_localCacheDirURL;	// 40 = 0x28
    NSString *_serviceID;	// 48 = 0x30
    NSURL *_remoteImageURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100024774
@property(readonly, copy, nonatomic) NSURL *remoteImageURL; // @synthesize remoteImageURL=_remoteImageURL;
@property(readonly, copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (_Bool)removeCachedIconImage;	// IMP=0x0000000100024530
- (void)_fetchImageFromInternetURL;	// IMP=0x000000010002437c
- (id)_saveISIconInLocalCacheDir:(id)arg1;	// IMP=0x0000000100024218
- (id)_saveDataInLocalCacheDir:(id)arg1;	// IMP=0x0000000100023f18
- (id)_returnGenericAppIcon;	// IMP=0x0000000100023eb0
- (id)getLocalCachedImageURL;	// IMP=0x0000000100023d44
- (id)initWithServiceID:(id)arg1 remoteImageURL:(id)arg2;	// IMP=0x0000000100023af0

@end
