//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol MTMediaLibraryTransactionManagerProtocol
- (void)requestMediaLibraryWriteTransaction:(_Bool (^)(MPMediaLibrary *))arg1 completion:(void (^)(_Bool))arg2;
- (void)requestMediaLibraryReadTransaction:(_Bool (^)(MPMediaLibrary *))arg1;
- (void)requestMediaLibraryWriteTransaction:(_Bool (^)(MPMediaLibrary *))arg1;
- (void)endGeneratingLibraryChangeNotifications:(void (^)(void))arg1;
- (void)beginGeneratingLibraryChangeNotifications:(void (^)(void))arg1;
@end
