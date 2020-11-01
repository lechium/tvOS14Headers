//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PKDAnnotationStore : NSObject
{
    NSURL *_annotationsURL;	// 8 = 0x8
    NSMutableDictionary *_annotations;	// 16 = 0x10
}

+ (id)containerURL;	// IMP=0x000000010001796c
+ (id)globalURL;	// IMP=0x0000000100017950
+ (id)confstrURL:(int)arg1;	// IMP=0x0000000100017848
+ (id)defaultDatabaseURL;	// IMP=0x000000010001778c
- (void).cxx_destruct;	// IMP=0x0000000100017a8c
@property(retain, nonatomic) NSMutableDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSURL *annotationsURL; // @synthesize annotationsURL=_annotationsURL;
- (_Bool)saveDb:(id *)arg1;	// IMP=0x0000000100017618
- (_Bool)loadDb:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100017470
- (void)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x00000001000170ec
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0000000100017044
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x0000000100016fc4
- (id)initWithDatabase:(const char *)arg1;	// IMP=0x0000000100016cc4

@end

